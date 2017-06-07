//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;
@protocol OS_dispatch_queue;

@interface HAPAddRemovePairingOperation : NSObject
{
    _Bool _admin;
    _Bool _operationExecuting;
    long long _operation;
    NSString *_identifier;
    NSData *_publicKey;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _completionHandler;
}

@property(nonatomic) _Bool operationExecuting; // @synthesize operationExecuting=_operationExecuting;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) _Bool admin; // @synthesize admin=_admin;
@property(retain, nonatomic) NSData *publicKey; // @synthesize publicKey=_publicKey;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) long long operation; // @synthesize operation=_operation;
- (void).cxx_destruct;
- (id)initWith:(long long)arg1 identifier:(id)arg2 publicKey:(id)arg3 admin:(_Bool)arg4 queue:(id)arg5 completion:(CDUnknownBlockType)arg6;

@end

