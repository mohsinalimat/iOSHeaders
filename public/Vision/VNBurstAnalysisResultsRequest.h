//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Vision/VNRequest.h>

@interface VNBurstAnalysisResultsRequest : VNRequest
{
    _Bool _includeClusters;
    _Bool _includeAllImageIdentifiers;
    _Bool _includeAllImageStats;
}

+ (_Bool)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;
+ (void)recordDefaultOptionsInDictionary:(id)arg1;
@property(nonatomic) _Bool includeAllImageStats; // @synthesize includeAllImageStats=_includeAllImageStats;
@property(nonatomic) _Bool includeAllImageIdentifiers; // @synthesize includeAllImageIdentifiers=_includeAllImageIdentifiers;
@property(nonatomic) _Bool includeClusters; // @synthesize includeClusters=_includeClusters;
- (_Bool)internalPerformInContext:(id)arg1 error:(id *)arg2;
- (void)applyConfigurationOfRequest:(id)arg1;
- (id)sequencedRequestPreviousObservationsKey;
- (id)observationsCacheKey;
- (id)initWithName:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;

@end

