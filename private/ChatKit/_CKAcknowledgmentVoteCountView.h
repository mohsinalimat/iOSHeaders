//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface _CKAcknowledgmentVoteCountView : UIView
{
    UILabel *_voteCountLabel;
    UIImageView *_ackIconImageView;
}

@property(retain, nonatomic) UIImageView *ackIconImageView; // @synthesize ackIconImageView=_ackIconImageView;
@property(retain, nonatomic) UILabel *voteCountLabel; // @synthesize voteCountLabel=_voteCountLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)configureWithAcknowledgmentTally:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

