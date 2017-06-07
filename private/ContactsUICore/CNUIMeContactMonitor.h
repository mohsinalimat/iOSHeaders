//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContact, CNContactStore, NSNotificationCenter;
@protocol CNCancelable, CNMeContactComparisonStrategy, CNScheduler;

@interface CNUIMeContactMonitor : NSObject
{
    _Bool _hasRegistered;
    _Bool _meContactIsUpToDate;
    id <CNMeContactComparisonStrategy> _strategy;
    CNContactStore *_store;
    NSNotificationCenter *_notificationCenter;
    CNContact *_meContact;
    id <CNScheduler> _lock;
    id <CNCancelable> _meNotificationToken;
}

+ (id)unifiedMeContactMonitor;
+ (id)meContactMonitor;
@property(nonatomic) _Bool meContactIsUpToDate; // @synthesize meContactIsUpToDate=_meContactIsUpToDate;
@property(nonatomic) _Bool hasRegistered; // @synthesize hasRegistered=_hasRegistered;
@property(retain, nonatomic) id <CNCancelable> meNotificationToken; // @synthesize meNotificationToken=_meNotificationToken;
@property(retain, nonatomic) id <CNScheduler> lock; // @synthesize lock=_lock;
@property(retain, nonatomic) CNContact *meContact; // @synthesize meContact=_meContact;
@property(retain, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(retain, nonatomic) CNContactStore *store; // @synthesize store=_store;
@property(retain, nonatomic) id <CNMeContactComparisonStrategy> strategy; // @synthesize strategy=_strategy;
- (void).cxx_destruct;
- (void)_updateMeContact;
- (void)meChanged:(id)arg1;
- (_Bool)isMeContact:(id)arg1;
- (void)dealloc;
- (id)initWithContactStore:(id)arg1;
- (id)init;
- (id)initWithComparisonStrategy:(id)arg1;
- (id)initWithComparisonStrategy:(id)arg1 contactStore:(id)arg2;
- (id)initWithComparisonStrategy:(id)arg1 contactStore:(id)arg2 notificationCenter:(id)arg3;

@end

