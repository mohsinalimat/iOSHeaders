//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStoreUI/SUScriptViewController.h>

@class NSNumber, NSString;

@interface SUScriptSplitViewController : SUScriptViewController
{
}

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
- (id)_splitViewController;
@property _Bool usesSharedPlaceholder;
@property(retain) NSString *title;
@property(retain) NSString *splitType;
@property(retain) NSNumber *splitShadowRadius;
@property(retain) NSNumber *splitShadowOpacity;
@property(retain) id splitShadowColor;
@property(retain) id splitPosition;
@property(retain) SUScriptViewController *secondViewController;
@property(retain) id minimumPaneSize;
@property(retain) SUScriptViewController *firstViewController;
- (id)_className;
- (id)newNativeViewController;

@end

