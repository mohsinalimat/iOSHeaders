//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface BurstFaceScoreEntry : NSObject
{
    float maxScore;
    float minScore;
    float sumScores;
    float sumSqScores;
    int numScores;
}

@property int numScores; // @synthesize numScores;
@property float minScore; // @synthesize minScore;
@property float maxScore; // @synthesize maxScore;
- (float)computeStandardDeviation;
- (float)computeAverage;
- (void)addScore:(float)arg1;
- (id)initWithScore:(float)arg1;

@end

