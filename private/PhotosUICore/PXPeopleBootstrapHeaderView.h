//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class NSString, PXPeopleScalableAvatarView, UILabel;

@interface PXPeopleBootstrapHeaderView : UICollectionReusableView
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    PXPeopleScalableAvatarView *_avatarView;
}

@property(retain, nonatomic) PXPeopleScalableAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *title;
- (void)prepareForReuse;
- (void)setPerson:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

