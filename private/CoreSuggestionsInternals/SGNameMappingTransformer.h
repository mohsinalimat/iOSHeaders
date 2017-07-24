//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/PMLTransformerProtocol-Protocol.h>

@class NSString;

@interface SGNameMappingTransformer : NSObject <PMLTransformerProtocol>
{
    NSString *_nameMappings[6];
    int _minimumConfidence;
    CDUnknownBlockType _confidenceMapper;
}

+ (id)withFullNameMapping:(id)arg1 firstNameMapping:(id)arg2 lastNameMapping:(id)arg3 minimumConfidence:(int)arg4 confidenceMapper:(CDUnknownBlockType)arg5 andPossessive:(id)arg6;
+ (id)withFullNameMapping:(id)arg1 firstNameMapping:(id)arg2 lastNameMapping:(id)arg3 andPossessive:(id)arg4;
+ (void)initialize;
- (void).cxx_destruct;
- (_Bool)isPossessive:(id)arg1;
- (id)transform:(id)arg1;
- (long long)nameMappingForToken:(id)arg1 withConfidence:(int *)arg2;
- (id)initWithFullNameMapping:(id)arg1 firstNameMapping:(id)arg2 lastNameMapping:(id)arg3 minimumConfidence:(int)arg4 confidenceMapper:(CDUnknownBlockType)arg5 andPossessive:(id)arg6;

@end

