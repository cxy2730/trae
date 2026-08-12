//! FFI 接口定义
//!
//! C 侧声明:
//!   typedef void (*LogCallback)(const char* msg, int level);
//!   void kg_core_init(void);
//!   int  kg_update_mode(LogCallback cb);
//!   int  kg_game_mode(LogCallback cb);
//!   int  kg_install_protection(LogCallback cb);
//!   void kg_stop(void);

pub type LogCallback = unsafe extern "C" fn(msg: *const u8, level: i32);

pub const LOG_INFO:  i32 = 0;
pub const LOG_WARN:  i32 = 1;
pub const LOG_ERROR: i32 = 2;
pub const LOG_DEBUG: i32 = 3;

pub fn log(cb: LogCallback, msg: &str) {
    unsafe { cb(msg.as_ptr(), LOG_INFO); }
}

pub fn log_warn(cb: LogCallback, msg: &str) {
    unsafe { cb(msg.as_ptr(), LOG_WARN); }
}

pub fn log_error(cb: LogCallback, msg: &str) {
    unsafe { cb(msg.as_ptr(), LOG_ERROR); }
}

pub fn log_debug(cb: LogCallback, msg: &str) {
    unsafe { cb(msg.as_ptr(), LOG_DEBUG); }
}
