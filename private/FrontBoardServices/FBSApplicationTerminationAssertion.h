//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface FBSApplicationTerminationAssertion : NSObject
{
    NSString *_bundleID;
    NSString *_reason;
    long long _assertionState;
    unsigned long long _serialNumber;
}

@property(nonatomic) unsigned long long serialNumber; // @synthesize serialNumber=_serialNumber;
@property(readonly, nonatomic) long long assertionState; // @synthesize assertionState=_assertionState;
@property(readonly, copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(readonly, copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void)invalidate;
- (id)description;
- (void)dealloc;
- (id)initWithBundleID:(id)arg1 reason:(id)arg2 acquisitionHandler:(CDUnknownBlockType)arg3;

@end
