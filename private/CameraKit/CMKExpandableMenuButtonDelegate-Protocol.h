//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CMKExpandableMenuButton;

@protocol CMKExpandableMenuButtonDelegate
- (void)expandMenuButton:(CMKExpandableMenuButton *)arg1 animated:(_Bool)arg2;
- (struct CGRect)expandedFrameForMenuButton:(CMKExpandableMenuButton *)arg1;
- (void)collapseMenuButton:(CMKExpandableMenuButton *)arg1 animated:(_Bool)arg2;
- (struct CGRect)collapsedFrameForMenuButton:(CMKExpandableMenuButton *)arg1;
@end

