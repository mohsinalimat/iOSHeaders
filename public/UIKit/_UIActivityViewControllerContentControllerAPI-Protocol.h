//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol _UIActivityViewControllerContentControllerAPI <NSObject>
- (void)cleanupWithSelectedActivityType:(NSString *)arg1;
- (void)setOtherActivityViewPresented:(_Bool)arg1;
- (void)setSharedItemsAvailable:(_Bool)arg1;
- (void)setNeedsRequestingSharedItems;
- (_Bool)hasAirDrop;
- (void)invalidateLayout;
- (struct CGSize)updatePreferredContentSizeWithWidth:(double)arg1;
- (double)displayHeight;
- (void)setDarkStyleOnLegacyApp:(_Bool)arg1;
- (void)reloadImageForActivityType:(NSString *)arg1;
- (void)updateActivities:(NSArray *)arg1 animated:(_Bool)arg2;
- (void)createContentViewControllersWithActivityItems:(NSArray *)arg1 availableActivities:(NSArray *)arg2 excludedActivityTypes:(NSArray *)arg3 includedActivityTypes:(NSArray *)arg4 excludedActivityCategories:(long long)arg5 sourceIsManaged:(_Bool)arg6 allowsEmbedding:(_Bool)arg7;
@end

