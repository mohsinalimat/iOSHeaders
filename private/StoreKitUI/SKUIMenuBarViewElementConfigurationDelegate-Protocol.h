//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class SKUIMenuBarViewElementConfiguration, SKUIMenuItemViewElement;
@protocol NSCopying;

@protocol SKUIMenuBarViewElementConfigurationDelegate <NSObject>

@optional
- (void)menuBarViewElementConfiguration:(SKUIMenuBarViewElementConfiguration *)arg1 selectMenuItemViewElement:(SKUIMenuItemViewElement *)arg2 animated:(_Bool)arg3;
- (void)menuBarViewElementConfiguration:(SKUIMenuBarViewElementConfiguration *)arg1 didReplaceDocumentForEntityUniqueIdentifier:(id <NSCopying>)arg2;
- (void)menuBarViewElementConfiguration:(SKUIMenuBarViewElementConfiguration *)arg1 didReplaceDocumentForMenuItemAtIndex:(unsigned long long)arg2;
@end

