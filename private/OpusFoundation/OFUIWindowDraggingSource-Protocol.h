//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OpusFoundation/NSObject-Protocol.h>

@class OFUIWindowDraggingItem, OFUIWindowDraggingSession;

@protocol OFUIWindowDraggingSource <NSObject>

@optional
- (struct CGPoint)draggingSource:(OFUIWindowDraggingSession *)arg1 badgeCenterForItem:(OFUIWindowDraggingItem *)arg2;
- (struct CGRect)draggingSource:(OFUIWindowDraggingSession *)arg1 originalFrameForItem:(OFUIWindowDraggingItem *)arg2;
- (void)draggingSource:(OFUIWindowDraggingSession *)arg1 cleanupItem:(OFUIWindowDraggingItem *)arg2;
- (void)draggingSource:(OFUIWindowDraggingSession *)arg1 updateItem:(OFUIWindowDraggingItem *)arg2;
- (void)draggingSource:(OFUIWindowDraggingSession *)arg1 prepareItem:(OFUIWindowDraggingItem *)arg2;
- (void)draggingSourceDidEnd:(OFUIWindowDraggingSession *)arg1 cancelled:(_Bool)arg2;
- (void)draggingSourceDidMove:(OFUIWindowDraggingSession *)arg1;
- (void)draggingSource:(OFUIWindowDraggingSession *)arg1 didAddItem:(OFUIWindowDraggingItem *)arg2;
- (_Bool)draggingSource:(OFUIWindowDraggingSession *)arg1 willAddItem:(OFUIWindowDraggingItem *)arg2;
- (void)draggingSourceDidBegin:(OFUIWindowDraggingSession *)arg1;
- (unsigned long long)draggingSourceWillBegin:(OFUIWindowDraggingSession *)arg1;
@end

