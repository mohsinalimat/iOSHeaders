//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayerUI/CCUIControlCenterObserver-Protocol.h>

@protocol CCUIControlCenterPageContentViewControllerDelegate;

@protocol CCUIControlCenterPageContentProviding <CCUIControlCenterObserver>
@property(nonatomic) __weak id <CCUIControlCenterPageContentViewControllerDelegate> delegate;

@optional
@property(readonly, nonatomic) _Bool wantsVisible;
@property(readonly, nonatomic) struct UIEdgeInsets contentInsets;
- (void)controlCenterDidScrollToThisPage:(_Bool)arg1;
- (_Bool)dismissModalFullScreenIfNeeded;
@end

