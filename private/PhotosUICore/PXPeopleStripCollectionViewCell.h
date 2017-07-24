//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSArray, PXRoundedCornerOverlayView;

@interface PXPeopleStripCollectionViewCell : UICollectionViewCell
{
    NSArray *_people;
    NSArray *_groupAvatarViews;
    PXRoundedCornerOverlayView *_roundCornerOverlay;
}

@property(retain, nonatomic) PXRoundedCornerOverlayView *roundCornerOverlay; // @synthesize roundCornerOverlay=_roundCornerOverlay;
@property(retain, nonatomic) NSArray *groupAvatarViews; // @synthesize groupAvatarViews=_groupAvatarViews;
@property(retain, nonatomic) NSArray *people; // @synthesize people=_people;
- (void).cxx_destruct;
- (void)_layoutAvatarViewsInFrame:(struct CGRect)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

