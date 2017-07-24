//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/NSSecureCoding-Protocol.h>

@class CKRecordID, CKServerChangeToken, NSData, NSNumber, NSString;

@interface _SGDCloudKitSyncPersistedState : NSObject <NSSecureCoding>
{
    CDUnknownBlockType _changeCallback;
    NSData *_salt;
    CKRecordID *_saltAtomicReferenceId;
    CKServerChangeToken *_syncToken;
    NSNumber *_hasSubscription;
    NSNumber *_eventsWereRemovedFromEventKit;
    NSString *_primaryICloudCalendarAccount;
}

+ (id)properties;
+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSString *primaryICloudCalendarAccount; // @synthesize primaryICloudCalendarAccount=_primaryICloudCalendarAccount;
@property(retain, nonatomic) NSNumber *eventsWereRemovedFromEventKit; // @synthesize eventsWereRemovedFromEventKit=_eventsWereRemovedFromEventKit;
@property(retain, nonatomic) NSNumber *hasSubscription; // @synthesize hasSubscription=_hasSubscription;
@property(retain, nonatomic) CKServerChangeToken *syncToken; // @synthesize syncToken=_syncToken;
@property(retain, nonatomic) CKRecordID *saltAtomicReferenceId; // @synthesize saltAtomicReferenceId=_saltAtomicReferenceId;
@property(retain, nonatomic) NSData *salt; // @synthesize salt=_salt;
@property(copy, nonatomic) CDUnknownBlockType changeCallback; // @synthesize changeCallback=_changeCallback;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopKvo;
- (void)setupKvo;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (SEL)_setterForProperty:(struct objc_property *)arg1;
- (SEL)_getterForProperty:(struct objc_property *)arg1;
- (id)init;

@end

