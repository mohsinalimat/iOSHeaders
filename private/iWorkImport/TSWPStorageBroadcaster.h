//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSHashTable;

__attribute__((visibility("hidden")))
@interface TSWPStorageBroadcaster : NSObject
{
    NSHashTable *_observers;
    NSHashTable *_paragraphObservers;
}

- (void).cxx_destruct;
- (void)broadcastStorage:(id)arg1 didChangeParagraphsInIndexRange:(struct _NSRange)arg2;
- (void)broadcastStorage:(id)arg1 didDeleteParagraphsInIndexRange:(struct _NSRange)arg2;
- (void)broadcastStorage:(id)arg1 didInsertParagraphsInIndexRange:(struct _NSRange)arg2;
- (void)broadcastStorage:(id)arg1 didChangeRange:(struct _NSRange)arg2 delta:(long long)arg3 broadcastKind:(int)arg4 attributeKindChanges:(id)arg5;
- (void)broadcastStorage:(id)arg1 didChangeRange:(struct _NSRange)arg2 delta:(long long)arg3 broadcastKind:(int)arg4;
- (void)removeAllObservers;
- (void)removeParagraphObserver:(id)arg1;
- (void)addParagraphObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic) unsigned long long paragraphObserverCount;
@property(readonly, nonatomic) unsigned long long observerCount;
- (void)dealloc;
- (id)init;

@end

