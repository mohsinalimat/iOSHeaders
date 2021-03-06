//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CKRecord, NSError;
@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface CKRecordDecryptInfo : NSObject
{
    CKRecord *_record;
    NSError *_error;
    NSObject<OS_dispatch_group> *_decryptGroup;
    CDUnknownBlockType _callback;
    unsigned long long _numUnwrapAttempts;
}

@property unsigned long long numUnwrapAttempts; // @synthesize numUnwrapAttempts=_numUnwrapAttempts;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *decryptGroup; // @synthesize decryptGroup=_decryptGroup;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) CKRecord *record; // @synthesize record=_record;
- (void).cxx_destruct;
- (void)_setupDecryptCallbackForQueue:(id)arg1;
- (id)initWithRecord:(id)arg1 callbackQueue:(id)arg2;
- (id)init;

@end

