//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PARRankingThresholds : NSObject
{
    double _topicThreshold;
    double _mtThreshold;
    double _tldThreshold;
    double _threshold;
}

+ (id)responseFromJSON:(id)arg1;
+ (id)defaultValue;
@property(nonatomic) double threshold; // @synthesize threshold=_threshold;
@property(nonatomic) double tldThreshold; // @synthesize tldThreshold=_tldThreshold;
@property(nonatomic) double mtThreshold; // @synthesize mtThreshold=_mtThreshold;
@property(nonatomic) double topicThreshold; // @synthesize topicThreshold=_topicThreshold;

@end

