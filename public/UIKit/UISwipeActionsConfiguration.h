//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface UISwipeActionsConfiguration : NSObject
{
    _Bool _performsFirstActionWithFullSwipe;
    _Bool _autosizesButtons;
    NSArray *_actions;
}

+ (id)configurationWithActions:(id)arg1;
@property(nonatomic, getter=_autosizesButtons, setter=_setAutosizesButtons:) _Bool autosizesButtons; // @synthesize autosizesButtons=_autosizesButtons;
@property(nonatomic) _Bool performsFirstActionWithFullSwipe; // @synthesize performsFirstActionWithFullSwipe=_performsFirstActionWithFullSwipe;
@property(readonly, copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

