//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface EARKeywordFinder : NSObject
{
    struct unique_ptr<quasar::KeywordFinder, std::__1::default_delete<quasar::KeywordFinder>> _kwf;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)correctedResultWithKeyword:(id)arg1 tokenizedKeyword:(id)arg2 preItnSausage:(id)arg3 preItnOneBest:(id)arg4 preItnOneBestIndices:(id)arg5 nbestSize:(long long)arg6;
- (id)initWithConfiguration:(id)arg1;

@end

