﻿#pragma once

namespace Core
{
	class CVProcessor
	{
	public:
		CVProcessor();
		void showImage(const char* path);
		void process(const char* path);
		const char* scanDirectory(const char* path);
	};
}