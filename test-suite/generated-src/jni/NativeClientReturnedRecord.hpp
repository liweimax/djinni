// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from client_interface.djinni

#pragma once

#include "client_returned_record.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeClientReturnedRecord final {
public:
    using CppType = ::ClientReturnedRecord;
    using JniType = jobject;

    static jobject toJava(JNIEnv*, ::ClientReturnedRecord);
    static ::ClientReturnedRecord fromJava(JNIEnv*, jobject);

    const djinni::GlobalRef<jclass> clazz { djinni::jniFindClass("com/dropbox/djinni/test/ClientReturnedRecord") };
    const jmethodID jconstructor { djinni::jniGetMethodID(clazz.get(), "<init>", "(JLjava/lang/String;)V") };
    const jfieldID field_mRecordId { djinni::jniGetFieldID(clazz.get(), "mRecordId", "J") };
    const jfieldID field_mContent { djinni::jniGetFieldID(clazz.get(), "mContent", "Ljava/lang/String;") };

private:
    NativeClientReturnedRecord() {}
    friend class djinni::JniClass<::djinni_generated::NativeClientReturnedRecord>;
};

}  // namespace djinni_generated
