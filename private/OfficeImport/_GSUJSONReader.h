//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSError;

__attribute__((visibility("hidden")))
@interface _GSUJSONReader : NSObject
{
    id input;
    int kind;
    NSError *error;
}

+ (_Bool)validForJSON:(id)arg1 depth:(unsigned long long)arg2 allowFragments:(_Bool)arg3;
- (id)parseStream:(id)arg1 options:(unsigned long long)arg2;
- (id)parseData:(id)arg1 options:(unsigned long long)arg2;
- (unsigned long long)findEncodingFromData:(id)arg1 withBOMSkipLength:(unsigned long long *)arg2;
- (id)parseUTF8JSONData:(id)arg1 skipBytes:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (void)setError:(id)arg1;
- (id)error;
- (void)dealloc;
- (id)init;

@end

