//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CalendarDaemon/EKPredicate.h>

#import <CalendarDaemon/EKDefaultPropertiesLoading-Protocol.h>

@class NSArray, NSDate, NSString;

@interface EKReminderPredicate : EKPredicate <EKDefaultPropertiesLoading>
{
    _Bool _limitToCompletedOrIncomplete;
    _Bool _completed;
    _Bool _useCompletionDateAsAlternate;
    _Bool _useDueDateAsCompletionDate;
    _Bool _shouldLoadDefaultProperties;
    int _sortOrder;
    NSString *_listTitle;
    NSDate *_dueAfter;
    NSDate *_dueBefore;
    NSString *_searchTerm;
    unsigned long long _maxResults;
    NSArray *_defaultPropertiesToLoad;
}

+ (id)predicateWithCalendars:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSArray *defaultPropertiesToLoad; // @synthesize defaultPropertiesToLoad=_defaultPropertiesToLoad;
@property(nonatomic) _Bool shouldLoadDefaultProperties; // @synthesize shouldLoadDefaultProperties=_shouldLoadDefaultProperties;
@property(nonatomic) unsigned long long maxResults; // @synthesize maxResults=_maxResults;
@property(nonatomic) int sortOrder; // @synthesize sortOrder=_sortOrder;
@property(retain, nonatomic) NSString *searchTerm; // @synthesize searchTerm=_searchTerm;
@property(nonatomic) _Bool useDueDateAsCompletionDate; // @synthesize useDueDateAsCompletionDate=_useDueDateAsCompletionDate;
@property(nonatomic) _Bool useCompletionDateAsAlternate; // @synthesize useCompletionDateAsAlternate=_useCompletionDateAsAlternate;
@property(retain, nonatomic) NSDate *dueBefore; // @synthesize dueBefore=_dueBefore;
@property(retain, nonatomic) NSDate *dueAfter; // @synthesize dueAfter=_dueAfter;
@property(nonatomic) _Bool completed; // @synthesize completed=_completed;
@property(nonatomic) _Bool limitToCompletedOrIncomplete; // @synthesize limitToCompletedOrIncomplete=_limitToCompletedOrIncomplete;
@property(retain, nonatomic) NSString *listTitle; // @synthesize listTitle=_listTitle;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCalendars:(id)arg1;
-     // Error parsing type: @24@0:8^{CalDatabase={__CFRuntimeBase=QAQ}i^{CPRecordStore}^{CalEventOccurrenceCache}^{CalScheduledTaskCache}^{__CFDictionary}^{__CFDictionary}{_opaque_pthread_mutex_t=q[56c]}II^{__CFArray}^{__CFString}^{__CFArray}ii^{__CFString}^{__CFString}^{__CFString}i@?{_opaque_pthread_mutex_t=q[56c]}B^{__CFArray}^{__CFArray}^{__CFArray}^{__CFArray}B@B}16, name: copyMatchingItemsWithDatabase:

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

