//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CPRecordStore;

struct CalDatabase {
    struct __CFRuntimeBase {
        unsigned long long _field1;
        unsigned char _field2[4];
        unsigned int _field3;
    } _field1;
    int _field2;
    struct CPRecordStore *_field3;
    struct CalEventOccurrenceCache *_field4;
    struct CalScheduledTaskCache *_field5;
    struct __CFDictionary *_field6;
    struct __CFDictionary *_field7;
    struct _opaque_pthread_mutex_t _field8;
    unsigned int _field9;
    unsigned int _field10;
    struct __CFArray *_field11;
    struct __CFString *_field12;
    struct __CFArray *_field13;
    int _field14;
    int _field15;
    struct __CFString *_field16;
    struct __CFString *_field17;
    int _field18;
    CDUnknownBlockType _field19;
    struct _opaque_pthread_mutex_t _field20;
    _Bool _field21;
    struct __CFArray *_field22;
    struct __CFArray *_field23;
    _Bool _field24;
    id _field25;
};

struct CalEventOccurrenceCache;

struct CalScheduledTaskCache;

struct __CFArray;

struct __CFDictionary;

struct __CFString;

struct _opaque_pthread_mutex_t {
    long long _field1;
    char _field2[56];
};
