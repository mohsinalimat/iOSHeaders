//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/CKDetailsCell.h>

@class UIImageView, UILabel;

@interface CKDetailsAddMemberCell : CKDetailsCell
{
    UILabel *_addLabel;
    UIImageView *_addIcon;
}

+ (double)preferredHeight;
+ (id)reuseIdentifier;
@property(retain, nonatomic) UIImageView *addIcon; // @synthesize addIcon=_addIcon;
@property(retain, nonatomic) UILabel *addLabel; // @synthesize addLabel=_addLabel;
- (void).cxx_destruct;
- (void)setEnabled:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

