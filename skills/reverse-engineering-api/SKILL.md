---
name: reverse-engineering-api
description: Reverse engineer web APIs by capturing browser traffic (HAR files) and generating production-ready Python API clients. Use when the user wants to create an API client for a website, automate web interactions, or understand undocumented APIs. Activate on tasks mentioning "reverse engineer", "api client", "HAR file", "capture traffic", or "automate website".
---

# Reverse Engineering API Skill

This skill enables you to reverse engineer web APIs by:

1. Controlling a browser with HAR recording enabled
2. Analyzing captured network traffic
3. Generating production-ready Python API clients

## Prerequisites

- **Playwright MCP**: You must have access to Playwright MCP tools for browser control
- **HAR Recording**: The browser must be configured to record HAR files
- **Python**: For running analysis scripts and generated clients

## Workflow Overview

```
[User Task] -> [Browser Capture] -> [HAR Analysis] -> [API Client Generation] -> [Testing & Refinement]
```

## Phase 0: Preparation

### Available Helper Scripts

This skill provides Python utilities for HAR analysis located at `scripts/`:

- `har_filter.py` - Filter HAR files to API endpoints only
- `har_analyze.py` - Extract structured endpoint information
- `har_validate.py` - Validate generated code against HAR analysis
- `har_utils.py` - Shared utility functions

### Script Usage Pattern

```bash
# 1. Filter HAR to remove noise (static assets, analytics, CDN)
python scripts/har_filter.py {har_path} --output filtered.har --stats

# 2. Analyze endpoints and extract patterns
python scripts/har_analyze.py filtered.har --output analysis.json

# 3. Read analysis for code generation guidance
cat analysis.json

# 4. Generate API client code based on analysis

# 5. Validate generated code
python scripts/har_validate.py api_client.py analysis.json
```

## Phase 1: Browser Capture with HAR Recording

1. Launch browser with HAR recording enabled via Playwright MCP
2. Generate a unique run ID
3. Configure HAR output path for recording

### During Capture

Navigate autonomously to trigger the API calls needed:
- Login flows (capture authentication)
- Data fetching (capture GET endpoints)
- Form submissions (capture POST/PUT endpoints)
- Pagination (capture query parameter patterns)

## Phase 2: HAR Analysis

Filter and analyze the captured HAR file to extract:
- API endpoints with path parameters
- Authentication patterns (Bearer token, cookies, API keys, OAuth)
- Request/response schemas
- Pagination mechanisms
- Query parameters and headers

## Phase 3: API Client Generation

Generate a production-ready Python API client with:
- Type hints for request/response models
- Session management with retry/backoff
- Authentication handling matching detected patterns
- Error mapping and serialization
- Usage examples

## Phase 4: Testing & Refinement

1. Test the generated API client against the target
2. Validate all endpoints are implemented
3. Check authentication handling
4. Fix missing features
5. Achieve >= 90% coverage score

## Authentication Patterns

Common patterns to detect:
- **Bearer Token (JWT)**: `Authorization: Bearer <token>`
- **Cookie-based**: `Set-Cookie`, session management
- **API Key**: `X-API-Key`, `X-Token` headers
- **OAuth 2.0**: Token endpoint flows
- **HMAC Signing**: Request signature with timestamp

Refer to `references/AUTH_PATTERNS.md` for detailed authentication patterns.

## Output Artifacts

- Filtered HAR file
- Structured endpoint analysis (JSON)
- Generated API client (Python)
- Validation report (coverage >= 90%)