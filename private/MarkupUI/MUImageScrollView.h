//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@protocol MUImageScrollViewDelegate;

__attribute__((visibility("hidden")))
@interface MUImageScrollView : UIScrollView
{
}

- (void)centerContentIgnoringInsets;
- (void)_centerContentIfNecessaryAdjustingContentOffset:(_Bool)arg1;

// Remaining properties
@property(nonatomic) __weak id <MUImageScrollViewDelegate> delegate; // @dynamic delegate;

@end

