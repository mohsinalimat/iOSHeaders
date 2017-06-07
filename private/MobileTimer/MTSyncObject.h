//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileTimer/MTSerializable-Protocol.h>

@class NSDate, NSString;

@interface MTSyncObject : NSObject <MTSerializable>
{
    long long _changeType;
}

+ (id)_stringFromChangeType:(long long)arg1;
+ (id)createSYChangeFromProtobuffObject:(id)arg1 changeType:(long long)arg2;
+ (int)sequenceNumber;
@property(nonatomic) long long changeType; // @synthesize changeType=_changeType;
@property(readonly, copy) NSString *description;
- (id)syncId;
@property(readonly, nonatomic) NSString *sequencer;
@property(readonly, nonatomic) NSString *objectIdentifier;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)createProtobufWithOptions:(id)arg1;
@property(readonly, nonatomic) NSDate *lastModifiedDate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
