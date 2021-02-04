#[no_mangle]
pub extern "C" fn hello_from_rust() {
    println!("Hello from Rust")
}

#[no_mangle]
pub extern "C" fn combine(x: u32, y: u32) -> u32 {
    x + y
}

#[cfg(test)]
mod hello_from_rust_tests {
    #[test]
    fn it_works() {
        assert_eq!(crate::combine(40, 2), 42);
    }
}
