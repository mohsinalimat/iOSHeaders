//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID, _DKDataProtectionMaster;

@interface _DKDataProtectionStateMonitor : NSObject
{
    _DKDataProtectionMaster *_master;
    NSUUID *_handlerUUID;
    CDUnknownBlockType _changeHandler;
}

- (void).cxx_destruct;
@property(copy) CDUnknownBlockType changeHandler; // @synthesize changeHandler=_changeHandler;
- (_Bool)isDataAvailableFor:(id)arg1;
- (void)dealloc;
- (id)init;

@end

