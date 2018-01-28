(setq schlau-compile-alist
      (append
       ;; compile C++
       '((c++-mode . "mkdir %G/build ; cd %G/build && cmake .. && make -k -j8"))

       ;; compile Rust
       '((rust-mode . "RUST_BACKTRACE=1 /home/alveric/.cargo/bin/cargo build"))
       ))
