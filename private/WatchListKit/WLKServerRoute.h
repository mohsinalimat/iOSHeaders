//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface WLKServerRoute : NSObject
{
    NSDictionary *_dictionary;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool requiresMescal;
@property(readonly, copy, nonatomic) NSString *HTTPMethod;
@property(readonly, copy, nonatomic) NSString *endpointURLString;
- (id)description;
- (id)initWithDictionary:(id)arg1;

@end

