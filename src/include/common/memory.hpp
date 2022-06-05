#pragma once

#include <memory>
using std::unique_ptr;
using std::shared_ptr;
using std::move;
using std::make_unique;

template <typename S, typename T, typename... Args>
unique_ptr<S> make_unique_base(Args &&... args) {
	return unique_ptr<S>(new T(std::forward<Args>(args)...));
}
