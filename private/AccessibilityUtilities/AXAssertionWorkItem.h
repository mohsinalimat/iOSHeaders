//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AXAssertionWorkItem : NSObject
{
    _Bool _acquire;
    NSString *_type;
    NSString *_identifier;
    unsigned long long _retries;
}

@property(nonatomic) unsigned long long retries; // @synthesize retries=_retries;
@property(readonly, nonatomic) _Bool acquire; // @synthesize acquire=_acquire;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
- (void)dealloc;
- (id)initWithType:(id)arg1 identifier:(id)arg2 isAcquisition:(_Bool)arg3;

@end

