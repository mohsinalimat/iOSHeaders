//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVContentKeySession, AVWeakReference, NSData, NSError;
@protocol NSObject;

@interface AVContentKeyRequestInternal : NSObject
{
    AVContentKeySession *_session;
    id _identifier;
    NSData *_initializationData;
    long long _status;
    id <NSObject> _context;
    AVWeakReference *_assetWeakRef;
    _Bool _providesPersistableKey;
    struct OpaqueFigCPECryptor *_figCryptor;
    NSError *_error;
}

@end
