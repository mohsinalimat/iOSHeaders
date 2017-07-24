//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSManagedObjectContext, NSPersistentHistoryToken, NSPersistentStore;
@protocol OS_dispatch_queue;

@interface ICXPCStoreCrossProcessChangeListener : NSObject
{
    _Bool _listening;
    NSPersistentStore *_store;
    NSManagedObjectContext *_context;
    NSPersistentHistoryToken *_previousHistoryToken;
    NSDate *_previousHistoryDate;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)contextSaveNotificationFromPersistentHistoryResult:(id)arg1 latestToken:(id *)arg2 latestTimestamp:(id *)arg3;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic, getter=isListening) _Bool listening; // @synthesize listening=_listening;
@property(retain, nonatomic) NSDate *previousHistoryDate; // @synthesize previousHistoryDate=_previousHistoryDate;
@property(retain, nonatomic) NSPersistentHistoryToken *previousHistoryToken; // @synthesize previousHistoryToken=_previousHistoryToken;
@property(nonatomic) __weak NSManagedObjectContext *context; // @synthesize context=_context;
@property(nonatomic) __weak NSPersistentStore *store; // @synthesize store=_store;
- (void).cxx_destruct;
- (void)handleNotification:(id)arg1;
- (void)stopListening;
- (void)startListening;
- (void)dealloc;
- (id)initWithStore:(id)arg1 context:(id)arg2;
- (id)init;

@end

