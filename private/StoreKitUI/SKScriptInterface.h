//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStoreUI/SUScriptInterface.h>

@class SKProductPageViewController;

@interface SKScriptInterface : SUScriptInterface
{
    SKProductPageViewController *_parentProductPageViewController;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
@property(nonatomic) __weak SKProductPageViewController *parentProductPageViewController; // @synthesize parentProductPageViewController=_parentProductPageViewController;
- (void).cxx_destruct;
- (void)showStoreSheetWithRequest:(id)arg1 animated:(_Bool)arg2;
- (id)makeStoreSheetRequest;

@end

