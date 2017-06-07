//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CNAvatarView, CNContact, NSAttributedString, NSMutableArray, UILabel;

@interface HUContactView : UIView
{
    double _avatarDiameter;
    CNContact *_contact;
    long long _contactNameFormatStyle;
    unsigned long long _numberOfLinesForMessage;
    CNAvatarView *_avatarView;
    NSMutableArray *_constraints;
    UILabel *_nameLabel;
    UILabel *_messageLabel;
}

@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) NSMutableArray *constraints; // @synthesize constraints=_constraints;
@property(retain, nonatomic) CNAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(nonatomic) unsigned long long numberOfLinesForMessage; // @synthesize numberOfLinesForMessage=_numberOfLinesForMessage;
@property(nonatomic) long long contactNameFormatStyle; // @synthesize contactNameFormatStyle=_contactNameFormatStyle;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(nonatomic) double avatarDiameter; // @synthesize avatarDiameter=_avatarDiameter;
- (void).cxx_destruct;
- (void)_updateConstraints;
- (void)_setupViews;
@property(retain, nonatomic) NSAttributedString *message;
- (id)initWithFrame:(struct CGRect)arg1;

@end

