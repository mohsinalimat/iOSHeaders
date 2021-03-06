//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIStatusBarItemView.h>

__attribute__((visibility("hidden")))
@interface UIStatusBarSignalStrengthItemView : UIStatusBarItemView
{
    int _signalStrengthRaw;
    int _signalStrengthBars;
    _Bool _enableRSSI;
    _Bool _showRSSI;
}

- (id)_stringForRSSI;
- (double)extraLeftPadding;
- (double)extraRightPadding;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)contentsImage;
- (_Bool)updateForNewData:(id)arg1 actions:(int)arg2;

@end

