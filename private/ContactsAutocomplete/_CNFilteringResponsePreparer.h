//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsAutocomplete/_CNAutocompleteResponsePreparerDecorator.h>

@interface _CNFilteringResponsePreparer : _CNAutocompleteResponsePreparerDecorator
{
    CDUnknownBlockType _filter;
}

@property(readonly, copy) CDUnknownBlockType filter; // @synthesize filter=_filter;
- (void).cxx_destruct;
- (id)prepareResults:(id)arg1;
- (id)initWithResponsePreparer:(id)arg1 delegate:(id)arg2 filter:(CDUnknownBlockType)arg3;

@end

