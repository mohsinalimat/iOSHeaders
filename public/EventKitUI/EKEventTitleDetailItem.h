//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKitUI/EKEventDetailItem.h>

#import <EventKitUI/EKEventDetailTitleCellDelegate-Protocol.h>

@class NSDate, NSObject, UIColor, UITableViewCell;
@protocol EKEventTitleDetailItemDelegate;

__attribute__((visibility("hidden")))
@interface EKEventTitleDetailItem : EKEventDetailItem <EKEventDetailTitleCellDelegate>
{
    UITableViewCell *_cell;
    UIColor *_color;
    _Bool _showDot;
    _Bool _cellNeedsUpdate;
    _Bool _hidesSeparator;
    _Bool _hasMapItemLaunchOptionFromTimeToLeaveNotification;
    NSDate *_proposedTime;
    NSObject<EKEventTitleDetailItemDelegate> *_editDelegate;
}

@property(nonatomic) _Bool hasMapItemLaunchOptionFromTimeToLeaveNotification; // @synthesize hasMapItemLaunchOptionFromTimeToLeaveNotification=_hasMapItemLaunchOptionFromTimeToLeaveNotification;
@property(nonatomic) __weak NSObject<EKEventTitleDetailItemDelegate> *editDelegate; // @synthesize editDelegate=_editDelegate;
@property(retain, nonatomic) NSDate *proposedTime; // @synthesize proposedTime=_proposedTime;
@property(nonatomic) _Bool hidesSeparator; // @synthesize hidesSeparator=_hidesSeparator;
- (void).cxx_destruct;
- (_Bool)minimalMode;
- (void)predictionWasActedOn;
- (_Bool)shouldShowEditButtonInline;
- (void)editButtonPressed;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (double)titleHeight;
- (void)_updateCellIfNeededForWidth:(double)arg1;
- (void)setCellPosition:(int)arg1;
- (_Bool)configureWithCalendar:(id)arg1 preview:(_Bool)arg2;
- (void)reset;

@end

