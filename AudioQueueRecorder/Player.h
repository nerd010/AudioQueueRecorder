//
//  Player.h
//  AudioQueueRecorder
//
//  Created by Charles Wang on 16/5/3.
//  Copyright © 2016年 CHW. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AudioToolbox/AudioToolbox.h>

//#import "AudioConstant.h"

@interface Player : NSObject
{
    //音频参数
    AudioStreamBasicDescription audioDescription;
    // 音频播放队列
    AudioQueueRef audioQueue;
    // 音频缓存
    AudioQueueBufferRef audioQueueBuffers[QUEUE_BUFFER_SIZE];
}

-(void)Play:(Byte *)audioByte Length:(long)len;

{
    Byte *audioByte;
    long audioDataIndex;
    long audioDataLength;
}


@end
