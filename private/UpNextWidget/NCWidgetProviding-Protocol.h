//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UpNextWidget/NSObject-Protocol.h>

@protocol NCWidgetProviding <NSObject>

@optional
- (struct UIEdgeInsets)widgetMarginInsetsForProposedMarginInsets:(struct UIEdgeInsets)arg1;
- (void)widgetPerformUpdateWithCompletionHandler:(void (^)(unsigned long long))arg1;
- (void)widgetActiveDisplayModeDidChange:(long long)arg1 withMaximumSize:(struct CGSize)arg2;
@end

