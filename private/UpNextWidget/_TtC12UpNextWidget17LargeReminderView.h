//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDate, NSString, UIColor;

@interface _TtC12UpNextWidget17LargeReminderView : UIView
{
    // Error parsing type: , name: viewTapped
    // Error parsing type: , name: listColor
    // Error parsing type: , name: title
    // Error parsing type: , name: dueDate
    // Error parsing type: , name: location
    // Error parsing type: , name: notes
    // Error parsing type: , name: reminderTrailingView
    // Error parsing type: , name: circleImageView
    // Error parsing type: , name: circleDiameter
}

- (CDUnknownBlockType).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)tapped:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic, copy) NSString *notes; // @synthesize notes;
@property(nonatomic, copy) NSString *location; // @synthesize location;
@property(nonatomic, copy) NSDate *dueDate; // @synthesize dueDate;
@property(nonatomic, copy) NSString *title; // @synthesize title;
@property(nonatomic, retain) UIColor *listColor; // @synthesize listColor;
- (double)lastBaselineOffsetFromBottom;
- (double)firstBaselineOffsetFromTop;
@property(nonatomic, copy) CDUnknownBlockType viewTapped; // @synthesize viewTapped;

@end

