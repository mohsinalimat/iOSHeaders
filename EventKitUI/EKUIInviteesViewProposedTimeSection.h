//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <EventKitUI/EKUIInviteesViewConflictResolutionSection-Protocol.h>

@class EKEvent, EKInviteeAlternativeTimeSearcher, NSArray, NSMutableOrderedSet, NSMutableSet, NSString;

@interface EKUIInviteesViewProposedTimeSection : NSObject <EKUIInviteesViewConflictResolutionSection>
{
    _Bool _conflictFound;
    EKEvent *_event;
    NSString *_title;
    NSArray *_busyParticipants;
    NSMutableSet *_rowsShowingAllParticipants;
    NSString *_cachedCellReuseIdentifier;
    unsigned long long _reuseIdentifierVersion;
    CDUnknownBlockType _tableViewCellHook;
    CDUnknownBlockType _newTimeChosen;
    CDUnknownBlockType _showPreviewOfEventAtTime;
    EKInviteeAlternativeTimeSearcher *_availabilitySearcher;
    NSMutableOrderedSet *_proposedTimes;
    NSArray *_proposedTimeResults;
    long long _checkedRow;
}

@property(nonatomic) long long checkedRow; // @synthesize checkedRow=_checkedRow;
@property(retain, nonatomic) NSArray *proposedTimeResults; // @synthesize proposedTimeResults=_proposedTimeResults;
@property(retain, nonatomic) NSMutableOrderedSet *proposedTimes; // @synthesize proposedTimes=_proposedTimes;
@property(retain, nonatomic) EKInviteeAlternativeTimeSearcher *availabilitySearcher; // @synthesize availabilitySearcher=_availabilitySearcher;
@property(copy, nonatomic) CDUnknownBlockType showPreviewOfEventAtTime; // @synthesize showPreviewOfEventAtTime=_showPreviewOfEventAtTime;
@property(copy, nonatomic) CDUnknownBlockType newTimeChosen; // @synthesize newTimeChosen=_newTimeChosen;
@property(copy, nonatomic) CDUnknownBlockType tableViewCellHook; // @synthesize tableViewCellHook=_tableViewCellHook;
@property(nonatomic) unsigned long long reuseIdentifierVersion; // @synthesize reuseIdentifierVersion=_reuseIdentifierVersion;
@property(retain, nonatomic) NSString *cachedCellReuseIdentifier; // @synthesize cachedCellReuseIdentifier=_cachedCellReuseIdentifier;
@property(nonatomic) _Bool conflictFound; // @synthesize conflictFound=_conflictFound;
@property(retain, nonatomic) NSMutableSet *rowsShowingAllParticipants; // @synthesize rowsShowingAllParticipants=_rowsShowingAllParticipants;
@property(retain, nonatomic) NSArray *busyParticipants; // @synthesize busyParticipants=_busyParticipants;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak EKEvent *event; // @synthesize event=_event;
- (void).cxx_destruct;
- (_Bool)_isValidRow:(long long)arg1;
- (_Bool)isRowChecked:(long long)arg1;
- (id)busyParticipantsForDate:(id)arg1;
- (id)namesForParticipantsProposingDate:(id)arg1;
- (void)refreshCellsAfterStateChange;
- (void)availabilitySearcherChangedState:(long long)arg1;
- (_Bool)injectNewRowsBeforeLastExistingRow;
- (void)clearCheckmark;
- (void)cancelOutstandingOperations;
- (double)estimatedHeightForRow:(id)arg1;
- (void)commitEditingStyle:(long long)arg1 forRow:(id)arg2;
- (id)titleForDeleteConfirmationButtonForRow:(id)arg1;
- (long long)editingStyleForRow:(id)arg1;
- (_Bool)canEditRow:(id)arg1;
- (void)setChecked:(long long)arg1;
- (void)selectRow:(id)arg1;
- (_Bool)canSelectRow:(id)arg1;
- (void)reloadAndRegisterReusableCellsWithTableView:(id)arg1;
- (id)cellForIndexPath:(id)arg1 inTableView:(id)arg2;
- (unsigned long long)numberOfRows;
- (_Bool)sectionShouldBeShown;
- (id)headerTitle;
- (id)debugTitle;
- (void)updateWithEvent:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
