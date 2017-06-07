//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSuggestionsInternals/SGPipelineDissector.h>

@class SGAccountsAdapter, SGMEventICSOpportunity;

@interface SGCalendarAttachmentDissector : SGPipelineDissector
{
    SGMEventICSOpportunity *_icsOpportunityTracker;
    SGAccountsAdapter *_accountsAdapter;
}

- (void).cxx_destruct;
- (void)dissectInternal:(id)arg1 inContext:(id)arg2;
- (struct SGMEventICSSourceType_)accountTypeFor:(id)arg1;
- (_Bool)hasCalendarAccountForOneOf:(id)arg1;
- (_Bool)shouldIgnoreEntity:(id)arg1;
- (id)downloadedCalendarAttachmentsFrom:(id)arg1;
- (id)init;

@end

