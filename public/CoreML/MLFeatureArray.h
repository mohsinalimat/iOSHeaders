//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreML/MLFeatureArray-Protocol.h>

@interface MLFeatureArray : NSObject <MLFeatureArray>
{
}

+ (id)featureArrayWithArray:(id)arg1 description:(id)arg2 error:(id *)arg3;
+ (id)featureArrayWithArray:(id)arg1 error:(id *)arg2;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
@property(readonly) unsigned long long count;

@end

