//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PXPeopleConfirmationSummaryViewController;
@protocol PXPerson;

@protocol PXPeopleSummaryDelegate <NSObject>
- (unsigned long long)autoConfirmedCountForSummaryViewController:(PXPeopleConfirmationSummaryViewController *)arg1;
- (unsigned long long)userConfirmedCountForSummaryViewController:(PXPeopleConfirmationSummaryViewController *)arg1;
- (id <PXPerson>)personForSummaryViewController:(PXPeopleConfirmationSummaryViewController *)arg1;
@end

