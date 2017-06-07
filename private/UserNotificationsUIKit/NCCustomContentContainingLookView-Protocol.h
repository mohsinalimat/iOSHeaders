//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UserNotificationsUIKit/NCLookView-Protocol.h>

@class UIScrollView, UITapGestureRecognizer;

@protocol NCCustomContentContainingLookView <NCLookView>
@property(readonly, nonatomic) UITapGestureRecognizer *lookViewTapGestureRecognizer;
@property(nonatomic, getter=isActionsHidden) _Bool actionsHidden;
@property(readonly, nonatomic, getter=_scrollView) UIScrollView *scrollView;
@property(nonatomic) _Bool hidesNotificationContent;
@property(readonly, nonatomic) struct CGSize sizeExcludingActions;
@property(readonly, nonatomic) struct CGSize contentSizeExcludingActions;
@property(nonatomic) unsigned long long customContentLocation;
@property(nonatomic) struct CGSize customContentSize;
- (struct CGRect)scrollViewFrame;
- (struct CGSize)actionsSizeThatFits:(struct CGSize)arg1;
@end

