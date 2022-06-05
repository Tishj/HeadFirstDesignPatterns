#pragma once

#include <exception>
#include <string>

struct NotImplementedException : public std::exception {
	NotImplementedException(const std::string& message) : err_msg(message) {}
	const char* what() const noexcept {
		return err_msg.c_str();
	}
private:
	std::string err_msg;
};
